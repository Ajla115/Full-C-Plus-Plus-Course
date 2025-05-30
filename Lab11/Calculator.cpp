//Created by User on 25. 2. 2024..
// #6: Create a class with the name “Calculator”. The class should take two parameters and it allows the user to add,
// subtract, divide and multiply the two numbers. The methods that you need to implement are sum, divide, multiply and difference.

#include <iostream>

using namespace std;

class Calculator{
public:
    int num1;
    int num2;

    Calculator (int x, int y){
        num1=x;
        num2=y;
    }

    int sumi(){
        return num1 + num2;

    }

    int diff(){
        return num1-num2;
    }

    int mult(){
        return num1*num2;
    }

    int divi(){
        return num1/num2;
    }

};


int main()
{
    Calculator calc1(2,1);

    cout<<calc1.sumi()<<endl;
    cout<<calc1.diff()<<endl;
    cout<<calc1.mult()<<endl;
    cout<<calc1.divi()<<endl;

    return 0;
}
