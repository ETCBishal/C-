#include <iostream>
#include <string>

using namespace std;

class Student{
    int id;
    static int count;

    public:
        void getId(void){
            cout<<"Enter your ID\n> ";
            cin>>id;
            count++;
        }
        void displayInfo(void){
            cout<<"Your ID is "<<id<<" and you are "<<count<<" Student"<<endl;
        }

        static void getCounter(void){
            cout<<"The value of counter is "<<count<<endl;
        } 

    
};
int Student :: count;


int main()
{

    Student Bishal;
    Bishal.getId();
    Bishal.displayInfo();
    Student :: getCounter();  // It can access the static variable of a class

    Bishal.getId();
    Bishal.displayInfo();
    Student :: getCounter();

    Bishal.getId();
    Bishal.displayInfo();
    Student :: getCounter();

    return 0;
}