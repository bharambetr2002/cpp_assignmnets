/*
Create a class Point with data members as x,y. Create Default and Parameterized constructors.
Write getters and setters for all the data members. Also add the display function.
Create the object of this class in main method and invoke all the methods in that class.
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point();
    Point(int x, int y);
    void getVar1();
    void getVar2();
    void setVar1();
    void setVar2();
    void displayVar();
};

Point ::Point()
{
    x = 0;
    y = 0;
}

Point ::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point ::getVar1()
{
    cout << "x is : " << x;
}
void Point ::getVar2()
{
    cout << "y is : " << y;
}

void Point ::setVar1()
{
    cout << "x updated is : ";
    cin >> x;
}
void Point ::setVar2()
{
    cout << "y updated is : ";
    cin >> y;
}

void Point ::displayVar()
{
    cout << "x is : " << x << "y is : " << y << endl;
}

int main()
{
    Point p1;
    p1.setVar1();
    p1.setVar2();
    p1.getVar1();
    p1.getVar2();
    p1.displayVar();

    Point p2(10, 11);
    p2.getVar1();
    p2.getVar2();
    p2.displayVar();
}
