/*
By Bishal jaiswal
Purpose : Practicing (friend class);
*/

#include <iostream>
#include <cmath>

using namespace std;

class X
{
    int x1, x2;
    friend class Result;

public:
    void setVal_X()
    {
        cout << "Enter the value of x2\n> ";
        cin >> x2;

        cout << "Enter the value of x1\n> ";
        cin >> x1;
    }
};

class Y
{
    int y1, y2;
    friend class Result;

public:
    void setVal_Y()
    {
        cout << "Enter the value of y2\n> ";
        cin >> y2;

        cout << "Enter the value of y1\n> ";
        cin >> y1;
    }
};

class Result
{
    float actualDistance;

public:
    void printDistance(X o1, Y ob1)
    {
        actualDistance = sqrt((o1.x2 - o1.x1) * (o1.x2 - o1.x1) + (ob1.y2 - ob1.y1) * (ob1.y2 - ob1.y1));
        cout << "The distance between the points x2 = ("<<(o1.x2)<<"), x1 = ("<<(o1.x1)<<")"
             << " and point y2 = ("<<(ob1.y2)<<"), y1 = ("<<(ob1.y1)<<") is : "<<actualDistance<<endl;
    }
};

int main()
{
    X objX;
    objX.setVal_X();

    Y objY;
    objY.setVal_Y();

    Result objResult;
    objResult.printDistance(objX, objY);

    return 0;
}