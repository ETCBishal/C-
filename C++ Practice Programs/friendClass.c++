#include <iostream>
using namespace std;

class Sum;

class A{
    int num1;
    friend class Sum;
    public:
        void input(int number){
            num1 = number;
        }
};

class B{
    int num2;
    friend class Sum;
    public:
        void input(int number){
            num2 = number;

        }
};

class Sum{
    public:
        void printSum(A o1,B o2){
            cout<<"The sum is "<<o1.num1+o2.num2;
        }
};

int main()
{

    A obj1;
    obj1.input(5);
    
    B obj2;
    obj2.input(3);
    
    Sum obj3;
    obj3.printSum(obj1,obj2);
    
    

    return 0;
}