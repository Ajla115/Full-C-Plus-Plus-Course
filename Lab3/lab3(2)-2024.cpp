//#1: Consider these values: 5, 10
//Using mathematical functions, find:
//The smallest value,
//The largest value.

#include <iostream>
using namespace std;

int main(){
    cout << "Minimum between 5 and 10 is: " << min(5, 10) << endl;
    cout << "Maximum between 5 and 10 is: " << max(5, 10);

    return 0;
}

//#2: Find the following values:
//Square root of 64,
//Round the number 2.6,
//Logarithm of 2

#include <iostream>
#include <cmath> //include cmath library for these math functions
using namespace std;

int main(){
    cout << "Square root of 64 is: " << sqrt(64) << endl;
    cout << "Rounding number 2.6 results in: " << round(2.6) << endl;
    cout << "Logarithm of 2 is: " << log(2) << endl;
    return 0;
}

//#5. Consider the following string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//Find the length of this string.
//Print out the first element of the string.
//Print out the last element of the string.

#include <iostream>
using namespace std;

int main(){

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //you can calculate the size using length or size function
    cout << "Length of the string is: " << txt.length() << endl;
    cout << "Length of the string is: " << txt.size() << endl;

    cout << "First letter of the string is: " << txt[0] << endl;

    //there are multiple ways how you can get the last letter
    cout << "Last letter of the string is: " << txt[txt.length() - 1] << endl;
    cout << "Last letter of the string is: " << txt[txt.size() - 1] << endl;
    cout << "Last letter of the string is: " << txt.back() << endl;

    return 0;
}

//#6. Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;

    cout << "Enter number: " << endl;
    cin >> num;

    //exclude zero immediately, since log of zero is undefined
    if (num <= 0) {
        cout << "Number can't be a power of 2.";
    }

    if (ceil(log2(num)) == floor(log2(num))){
        cout << "Number is power of 2." << endl;
    }
    else {
        cout << "Number is not power of 2." << endl;
    }

    return 0;
}

//#7. Write a C++ program to ask 2 users to enter the name, surname and year of birth.
//The program will then print out Welcome message for each.
//Also, the program will calculate how old both people are.
//Finally, the program will print out who is older.

#include <iostream>
using namespace std;

int main(){

    string fn1, fn2, ln1, ln2;
    int year1, year2;

    cout << "Enter first, last name and year of birth for user 1: " << endl;
    cin >> fn1 >> ln1 >> year1;
    cout<< fn1 << ln1 ;

    cout << "Enter first,last name and year of birth for user 2: " << endl;
    cin >> fn2 >> ln2 >> year2;

    //Types of concatination in C++
    cout << "Welcome user 1 " << fn1 + " "  + ln1 << endl;
    cout << "Welcome user 2 " << fn2 + " "  + ln2 << endl;

    //Another way of concatination is appending, eg. :
    //fn1.append(ln2)
    //now, when we would print just fn1, we would an output that contains both values that we entered for fn1 and ln1

    if (2024 - year1 > 2024 - year2){

        cout << "User " << fn1 + " "  + ln1 << " is older than " << fn2 + " "  + ln2 << endl;
    }
    else if (2024 - year1 == 2024 - year2){
        cout << "Users are of the same age." << endl;
    }
    else {
        cout << "User " << fn2 + " "  + ln2 << " is older than " << fn1 + " " + ln1 << endl;
    }

    return 0;

}

//#8. Ask the user to enter coordinates of two points, and find the distance between them.
//Round the distance to two decimal places.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x1, x2, y1, y2;
    double dist;

    cout << "Enter coordinated for point 1: " << endl;
    cin >> x1 >> y1;

    cout << "Enter coordinated for point 2: " << endl;
    cin >> x2 >> y2;

    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    cout << "Distance between these two points is: " << round(dist*100)/100;

    return 0;
}

//#9. Consider the following string sentence=”AMOR VINCIT OMNIA. ”
//Change the “VINCIT” to “NON VINCAT”.

#include <iostream>
using namespace std;

int main(){
    string sentence="AMOR VINCIT OMNIA.";
    //Remember, spaces count as one character as well, when indexing

    cout << sentence[5]; //letter V starts here
    cout << "String after replacement is: " << sentence.replace(5, 6, "NON VINCAT");
    //5 is the index from where we are starting replacement
    //6 is the length of the string that we want to replace, in this case VINCIT

    return 0;
}

//#10.Create complex calculator using switch case.
//The calculator should include:
//Basic functions (+, - , *, /)
//Logarithm,
//Square root of a number,
//Number to the power,
//Trigonometric functions (sin, cos, tan)
//Value rounded down and rounded up.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "Option 1: Addition\n";
    cout << "Option 2: Subtraction\n";
    cout << "Option 3: Multiplication\n";
    cout << "Option 4: Division\n";
    cout << "Option 5: Logarithm\n";
    cout << "Option 6: Square root\n";
    cout << "Option 7: Number to a certain power\n";
    cout << "Option 8: Sin, cos and tan\n";
    cout << "Option 9: Round up and down\n";
    cout << "Option 10: Just exit the program\n";

    int option, n1, n2;
    double n3;
    cout << "Please choose appropriate option:\n";
    cin >> option;

    switch(option){
        case 1:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of addition is: " << n1 + n2 << endl;
            break;
        case 2:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of subtraction is: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of multiplication is: " << n1 * n2 << endl;
            break;
        case 4:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of division is: " << n1 / n2 << endl;
            break;
        case 5:
            cout << "Enter one number: " << endl;
            cin >> n1;
            if (n1 != 0){
                cout << "Logarithm of  " << n1 << " is " << log(n1)<< endl;
            }
            else {
                cout << "Logarithm of 0 is undefined." << endl;
            }
            break;
        case 6:
            cout << "Enter one number: " << endl;
            cin >> n1;
            if (n1 >= 0){
                cout << "Square root of  " << n1 << " is " << sqrt(n1)<< endl;
            }
            else {
                cout << "Square root of negative numbers is in irrational set of numbers." << endl;
            }
            break;
        case 7:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << n1 << " to the power of " << n2 << " is " << pow(n1, n2) << endl;
            break;
        case 8:
            cout << "Enter one number: " << endl;
            cin >> n1;
            cout << " Sin of " << n1 << " is " << sin(n1) << endl;
            cout << " Cos of " << n1 << " is " << cos(n1) << endl;
            cout << " Tan of " << n1 << " is " << tan(n1) << endl;
            break;
        case 9:
            cout << "Enter one number: " << endl;
            cin >> n3;
            cout << " Round up of  " << n3 << " is " << ceil(n3) << endl;
            cout << " Round down of  " << n3 << " is " << floor(n3) << endl;
            break;
        case 10:
            cout << "Exiting...." << endl;
            break;
    }

    return 0;
}

//#11. Suppose you need to estimate the area enclosed by four cities, given the GPS locations
// (latitude and longitude) of these cities, as shown in the following diagram.
// How would you write a program to solve this problem?

#include <iostream>
#include <cmath>

int main() {

    //charlotte
    double x1 = 35.2270869;
    double y1 = -80.8431267;

    //atlanta
    double x2 = 33.7489954;
    double y2 = -84.3879824;

    //orlando
    double x3 = 28.5383355;
    double y3 = -81.3792365;

    //savannah
    double x4 = 32.0835407;
    double y4 = -81.0998342;

    //distance between charlotte and atlanta
    double dx = x2 - x1;
    double dy = y2 - y1;

    //distance between orlando and atlanta
    double dx1 = x3 - x2;
    double dy1 = y3 - y2;

    //distance between orlando and savannah
    double dx2 = x4 - x3;
    double dy2 = y4 - y3;

    //distance between savannah and charlotte
    double dx3 = x1 - x4;
    double dy3 = y1 - y4;

    //straight distance between orlando and charlotte
    double dxmiddle = x3 - x1;
    double dymiddle = y3 - y1;

    double charlotte_atlanta_distance = std::sqrt(dx * dx + dy * dy);
    double atlanta_orlando_distance = std::sqrt(dx1 * dx1 + dy1 * dy1);
    double orlando_savannah_distance = std::sqrt(dx2 * dx2 + dy2 * dy2);
    double savannah_charlote_distance = std::sqrt(dx3 * dx3 + dy3 * dy3);
    double middle_distance = std::sqrt(dxmiddle * dxmiddle + dymiddle * dymiddle);


    double sA = (charlotte_atlanta_distance + atlanta_orlando_distance + middle_distance) / 2;
    double areaA = std::sqrt(sA * (sA - charlotte_atlanta_distance) * (sA - atlanta_orlando_distance) * (sA - middle_distance));

    double sB = (orlando_savannah_distance + savannah_charlote_distance + middle_distance) / 2;
    double areaB = std::sqrt(sB * (sB - orlando_savannah_distance) * (sB - savannah_charlote_distance) * (sB - middle_distance));

    std::cout<<areaA+areaB;


    return 0;
}