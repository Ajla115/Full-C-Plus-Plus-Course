
//Passing by Value

#include <iostream>
#include <string>
int main(){
    std::string a = "I love programming";
    char c;
    std::cin>>c;
    if (c == 65)
        a.at(78) = 'A';
    a[0] = 'Y';
    a.at(0) = 'i';
    std::cout<<a<<(char)(++c)<<a.length()<<"-"<<a.size();
    return 0;
}