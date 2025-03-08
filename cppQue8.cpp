/*
Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors.
Write getters and setters for all the data members.
Also add the display function.
Create the object of this class in main method and invoke all the methods in that class.
*/

#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber();
    ComplexNumber(int real, int imaginary);
    void getVar1();
    void getVar2();
    void setVar1();
    void setVar2();
    void displayVar();
};
ComplexNumber ::ComplexNumber()
{
    real = 0;
    imaginary = 0;
}
ComplexNumber ::ComplexNumber(int real, int imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
void ComplexNumber ::getVar1()
{
    cout << "\nThe real number is : " << real;
}
void ComplexNumber ::getVar2()
{
    cout << "\nThe imaginary number is : " << imaginary;
}
void ComplexNumber ::setVar1()
{
    cout << "\nEnter the value of real : ";
    cin >> real;
}
void ComplexNumber ::setVar2()
{
    cout << "\nEnter the value of imaginary : ";
    cin >> imaginary;
}
void ComplexNumber ::displayVar()
{
    cout << "\n The Variables are as follow ";
    cout << "\n Real Number : " << real << "\n Imaginary Number : " << imaginary;
}

int main()
{
    ComplexNumber Num;
    ComplexNumber Num2(10, 20);
    Num.getVar1();
    Num.getVar2();
    Num.setVar1();
    Num.setVar2();
    Num.displayVar();
    Num2.displayVar();
}