#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;

    Book(string title, string author)
    {
        this->title = title;
        this->author = author;
    }

    void readBook()
    {
        cout << "Reading " + this->title + " by " + this->author << endl;
    }
};

int main()
{

    Book book1("Harry Potter", "JK Rowling");

    book1.readBook();
    cout << book1.title << endl;

    Book book2("Load of the Rings", "JRR Tolkien");

    book2.readBook();
    cout << book2.title << endl;

    return 0;
}