// Write a program to create student class and accept data members of it by the object and display them

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    float marks;
    int rollNo;

public:
    void acceptDetails()
    {
        cout << "Enter the following details : \n 1. Name \n 2. Age \n 3. Marks \n 4. Roll No. " << endl;
        cin >> name >> age >> marks >> rollNo;
    }
    void displayDetails()
    {
        cout << "Students Details are as follows " << "\n"
             << "Name : " << name << "\n"
             << " Age : " << age << "\n"
             << " Marks : " << marks << "\n"
             << " Roll No. : " << rollNo << endl;
    }
};

int main()
{
    Student S1;
    S1.acceptDetails();
    S1.displayDetails();
    return 0;
}