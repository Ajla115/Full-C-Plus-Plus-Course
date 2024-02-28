//#8: Write a C program to swap the values of 2 variables.
#include <iostream>
#include <cmath>

int main(){

    int var1, var2, temp;

    std::cout << "Enter values for the variable 1 and 2: " << std::endl;
    std::cin >> var1 >> var2;

    temp = var1;
    var1 = var2;
    var2 = temp;

    std:: cout << "Values after switching: " << var1 << " " <<  var2 << std::endl;

    return 0;
}
