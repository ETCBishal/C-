/*
By Bishal jaiswal
*/


#include <iostream>
#include <cmath>

using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    ans -> I'm using multiple inheritance.

    Q2. Which mode of Inheritance are you using?
    ans -> I'm using public mode.

    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    ans -> Below

    Q4. How is code reusability implemented?
    ans -> The code reusability is implemented by this way:
            - All the functions of the base class simpleCalculator and scientificCalculator
              is being used in Derived class that is HybridCalculator.

            ---- Please check the code written below ----
                            Thank You
*/

class simpleCalculator
{
protected:
    int num1, num2;

public:
    void setSimple_Number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void displayCalculation(void)
    {

        cout << "The sum of these two numbers is : " << num1 + num2 << endl;
        cout << "The difference of these two numbers is : " << num1 - num2 << endl;
        cout << "The product of these two numbers is : " << num1 * num2 << endl;
        cout << "The division of these two numbers is : " << num1 / num2 << endl
             << endl;
    }
};

class scientificCalculator
{

protected:
    int numb1, numb2;

public:
    void set_Scientific_Number(int a, int b)
    {
        numb1 = a;
        numb2 = b;
    }

    void displayScientificCalculation(void)
    {
        cout << "The value of cos(" << numb1 << ") is : " << cos(numb1) << endl;
        cout << "The value of cos(" << numb2 << ") is : " << cos(numb2) << endl;

        cout << "The value of sin(" << numb1 << ") is : " << sin(numb1) << endl;
        cout << "The value of sin(" << numb2 << ") is : " << sin(numb2) << endl;

        cout << "The value of tan(" << numb1 << ") is : " << tan(numb1) << endl;
        cout << "The value of tan(" << numb2 << ") is : " << tan(numb2) << endl;

        cout << "The cube root of(" << numb1 << ") is : " << cbrt(numb1) << endl;
        cout << "The cube root of(" << numb2 << ") is : " << cbrt(numb2) << endl;

        cout << "------------------------------------------";
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void finalCalculation(void)
    {
        cout << endl
             << "The Simple Calculations are :" << endl;
        cout << "-----------------------------" << endl
             << endl;
        displayCalculation();

        cout << "The Scientific Calculations are :" << endl;
        cout << "---------------------------------" << endl
             << endl;
        displayScientificCalculation();
    }
};

int main()
{
    int firstNumber,secondNumber;
    cout<<"Enter the first number\n> ";
    cin>>firstNumber;
    
    cout<<"Enter the second number\n> ";
    cin>>secondNumber;

    HybridCalculator objectOFhybridclass;

    objectOFhybridclass.setSimple_Number(firstNumber, secondNumber);
    objectOFhybridclass.set_Scientific_Number(firstNumber, secondNumber);
    objectOFhybridclass.finalCalculation();

    return 0;
}