//
// Created by Ajla Korman on 24. 3. 2025..
//

#include "demo3.tpp"

#include <iostream>
int main(){
    int number = 2;
    number += ++number + 1;
    std::cout << number<< std::endl;
    number *= (number%2)*3 + number++;
    std::cout << number<< std::endl;
    return 0;
}