#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:
        string title;
        string author;

        void readBook() {
            cout << "Reading " + this->title + " by " + this->author << endl;
        }
};

int main()
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";

    book1.readBook();
    cout << book1.title << endl;

    Book book2;
    book2.title = "Load of the Rings";
    book2.author = "JRR Tolkien";

    book2.readBook();
    cout << book2.title << endl;

    return 0;
}