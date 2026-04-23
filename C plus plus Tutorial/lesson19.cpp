#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string title, string author)
    {
        this->title = title;
        this->author = author;
    }

    string getTitle() {
        return this->title;
    }

    void setTitle(string title) {
        this->title = title;
    }

    string getAuthor() {
        return this->author;
    }

    void setAuthor(string author) {
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
    cout << book1.getTitle() << endl;

    Book book2("Load of the Rings", "JRR Tolkien");

    book2.readBook();
    cout << book2.getTitle() << endl;

    return 0;
}