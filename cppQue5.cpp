/* 4. Create a C++ program that demonstrates the use of arrays of objects.
The program should a simple hotel reservation system.
a.Create a class Room with the following attributes : -roomNumber(integer), roomType(string), guestName(string), checkInDate(string),
checkOutDate(string)
b. Implement the following member functions in the Room class:
- getDetails(): Asks the user to input the room's details (room number, room type, guest name,
check-in date, and check-out date)
- displayDetails(): Displays the room's details.
c. Create an array of Room objects with a size of 5.
d. Use a loop to ask the user to input the details of 5 rooms and store them in the array.
e. Use another loop to display the details of all rooms in the array.
f. Implement a function to search for a room by room number and display its details if found.
g. Implement a function to update the guest name and check-out date of a room.
*/

#include <iostream>
using namespace std;

class HotelManagementSystem
{
private:
    int roomNumber;
    string roomType;
    string guestName;
    string checkInDate;
    string checkOutDate;

public:
    void getDetails()
    {
        cout << "\nEnter Room Details:";

        cout << "\n1. Room Number: ";
        while (!(cin >> roomNumber))
        {
            cout << "Invalid input! Please enter a numeric room number: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin.ignore();

        cout << "2. Room Type: ";
        getline(cin, roomType);

        cout << "3. Guest Name: ";
        getline(cin, guestName);

        cout << "4. Check-In Date: ";
        getline(cin, checkInDate);

        cout << "5. Check-Out Date: ";
        getline(cin, checkOutDate);
    }

    void displayDetails()
    {
        cout << "\nRoom Details:";
        cout << "\nRoom Number : " << roomNumber;
        cout << "\nRoom Type : " << roomType;
        cout << "\nGuest Name : " << guestName;
        cout << "\nCheck-In Date : " << checkInDate;
        cout << "\nCheck-Out Date : " << checkOutDate << endl;
    }

    int getRoomNo()
    {
        return roomNumber;
    }

    void updateGuestName()
    {
        cout << "\nEnter Updated Guest Name: ";
        cin.ignore();
        getline(cin, guestName);
        cout << "Guest Name Updated Successfully!" << endl;
    }

    void updateCheckOutDate()
    {
        cout << "\nEnter Updated Check-Out Date: ";
        cin.ignore();
        getline(cin, checkOutDate);
        cout << "Check-Out Date Updated Successfully!" << endl;
    }
};

int main()
{
    HotelManagementSystem rooms[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for Room " << i + 1 << ":";
        rooms[i].getDetails();
    }

    cout << "\n----- Displaying Room Details -----";
    for (int i = 0; i < 5; i++)
    {
        rooms[i].displayDetails();
    }

    int choice = 0;
    do
    {
        cout << "\nMenu:";
        cout << "\n1 - Search for a Room";
        cout << "\n2 - Update Guest Name";
        cout << "\n3 - Update Check-Out Date";
        cout << "\n4 - Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        int rn;
        bool found = false;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Room Number to Search: ";
            cin >> rn;
            for (int i = 0; i < 5; i++)
            {
                if (rooms[i].getRoomNo() == rn)
                {
                    rooms[i].displayDetails();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Room not found!" << endl;
            break;

        case 2:
            cout << "\nEnter Room Number to Update Guest Name: ";
            cin >> rn;
            for (int i = 0; i < 5; i++)
            {
                if (rooms[i].getRoomNo() == rn)
                {
                    rooms[i].updateGuestName();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Room not found!" << endl;
            break;

        case 3:
            cout << "\nEnter Room Number to Update Check-Out Date: ";
            cin >> rn;
            for (int i = 0; i < 5; i++)
            {
                if (rooms[i].getRoomNo() == rn)
                {
                    rooms[i].updateCheckOutDate();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Room not found!" << endl;
            break;

        case 4:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
