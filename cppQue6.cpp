/*
Create a C++ program that implements a Book class with the following requirements:
Attributes: title (string), author (string), pages (integer), price (double)
Add default constructor and Parameterized Constructor write display method to show the book details.
- Use proper encapsulation and data hiding techniques
- Use meaningful variable names and comments to explain the code.
*/

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int pages;
    double price;

public:
    Book();
    Book(string title, string author, int pages, double price);
    void getBookDetails();
    void displayBook() const;
};

Book ::Book()
{
    title = "unknown";
    author = "unknown";
    pages = 0;
    price = 0;
}

void Book ::getBookDetails()
{
    cout << "Enter Book Details are as follows : " << endl;
    cout << "Title : ";
    cin >> title;
    cout << "\nauthor : ";
    cin >> author;
    cout << "\npages : ";
    cin >> pages;
    cout << "\nprice : ";
    cin >> price;
}

Book ::Book(string title, string author, int pages, double price)
{
    this->title = title;
    this->author = author;
    this->pages = pages;
    this->price = price;
}
void Book ::displayBook() const
{
    cout << "Book Details are as follows : " << endl;
    cout << "Title : " << title << "\nauthor : " << author << "\npages : " << pages << "\nprice : " << price << endl;
}

int main()
{
    Book novel[10];
    for (int i = 0; i < 10; i++)
    {
        novel[i].getBookDetails();
    }
    for (int i = 0; i < 10; i++)
    {
        novel[i].displayBook();
    }
}
