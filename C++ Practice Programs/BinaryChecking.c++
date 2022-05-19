#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

    public:
        void readBin();
        void checkBin();
        void swpBin();
        void displayBin();
};

void Binary :: readBin(){
    cout<<"Enter any binary number\n> ";
    cin>>s;
}

void Binary :: checkBin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary format\n";
            exit(0);
        }
                
    }
}

void Binary::swpBin(void)
{
    checkBin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void Binary :: displayBin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.readBin();
    // b.checkBin();    
    b.displayBin();
    b.swpBin();
    b.displayBin();

    return 0;
}