#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     if (n<=1)
//     {
//         return 1;
//     }
    
//     return n* factorial(n-1);
// }

int fibonacci(int n)
{
    if (n<2){
        return 1;
    }
    
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{

    // int num;
    // cout<<"Enter a number\n> ";
    // cin>>num;

    // cout<<"The factorial of "<<num<<" is : "<<factorial(num);

    int num_;
    cout<<"Enter a number to generate fibonacci series\n> ";
    cin>>num_;
    cout<<"The fibonacci series of "<<num_<<" is : "<<fibonacci(num_);
    
    return 0;
}