// Ques -> 4-5-6 (1-2-3)

/*Create a C++ program that demonstrates the use of arrays of objects.
The program should simulate a simple student management system
     a. Create a class Student with the following attributes : -name(string), rollNumber(integer), marks(integer array of size(5)
     b.Implement the following member functions in the Student class : -getDetails() : Asks the user to input the student's details (name, roll number, and marks) - displayDetails() : Displays the student's details
     c.Create an array of Student objects with a size of 10.
     d.Use a loop to ask the user to input the details of 10 students and store them in the array.
     e. Use another loop to display the details of all students in the array.
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int marks[5];

public:
    void getDetails()
    {
        cout << "Enter the student details:\n1. Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "2. Roll number: ";
        cin >> rollNumber;
        cout << "Enter Marks (5 subjects): " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayDetails()
    {
        cout << "\nStudent Details:\n";
        cout << "1. Name: " << name << "\n";
        cout << "2. Roll No.: " << rollNumber << "\n";
        cout << "3. Marks:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "   Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }
};

int main()
{
    Student student[10];
    for (int i = 1; i <= 10; i++)
    {
        cout << "\nEnter details for Student " << i << ":\n";
        student[i].getDetails();
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << "\nEnter details for Student " << i << ":\n";
        student[i].displayDetails();
    }
}
