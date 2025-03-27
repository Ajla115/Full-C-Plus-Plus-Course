//
//
#include <iostream>
#include <cstdlib>
int main(){
    int number = rand() % 10;
    int guess = -1;
    while (guess != number){
        std::cin >> guess;
        if (guess == number)
            std::cout<<"A";
        else
            std::cout<<"B";
    }
    return 0;
}