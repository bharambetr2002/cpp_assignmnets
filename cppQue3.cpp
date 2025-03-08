#include <iostream>
using namespace std;

class Book
{
private:
    int book_no;
    string book_name;
    string author;
    int edition;
    float price;
    int qty;
    float bill;
    float discount;
    float netbill;

public:
    void getData()
    {
        cout << "Enter Book Number: ";
        cin >> book_no;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Edition: ";
        cin >> edition;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> qty;
    }

    void calculateBill()
    {
        bill = price * qty;
        discount = bill * 0.05; // 5% discount
        netbill = bill - discount;
    }

    void displayData()
    {
        cout << "\nBook Details:\n";
        cout << "Book Number: " << book_no << "\n";
        cout << "Book Name: " << book_name << "\n";
        cout << "Author: " << author << "\n";
        cout << "Edition: " << edition << "\n";
        cout << "Price: " << price << "\n";
        cout << "Quantity: " << qty << "\n";
        cout << "Total Bill: " << bill << "\n";
        cout << "Discount (5%): " << discount << "\n";
        cout << "Net Bill: " << netbill << "\n";
    }
};

int main()
{
    Book b1;
    b1.getData();
    b1.calculateBill();
    b1.displayData();
    return 0;
}
