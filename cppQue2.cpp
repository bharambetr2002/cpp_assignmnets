// Write a program to Create employee class with the data members and appropriate member function for getting data and displaying data by simple default member function

#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeId;
    int yearOfExp;
    string employeeName;
    string department;

public:
    void getDetails()
    {
        cout << "Enter the respective employee details : 1. EmployeeId \n 2. Year Of Experience \n 3. Employee Name \n 4. Work Department  : " << "\n";
        cin >> employeeId >> yearOfExp;
        cin.ignore();
        getline(cin, employeeName);
        getline(cin, department);
    }

    void displayDetails()
    {
        cout << "Employee details are as follows " << "1. EmployeeId :" << employeeId << "\n"
             << "2. Year Of Experience : " << yearOfExp << "\n"
             << "3. Employee Name : " << employeeName << "\n"
             << "4. Work Department : " << department;
    }
};

int main()
{
    Employee E1;
    E1.getDetails();
    E1.displayDetails();
}
