#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
public:
    Book(string title, string author) {
        this -> title = title;
        this -> author = author;
    }

    string getTitle() {
        return this -> title;
    }
    void setTitle(string title) {
        this -> title = title;
    }

    void readBook() {
        cout << "Reading " + this -> title + " written by " + this -> author << endl;
    }
};

int main() {
    Book book1("Harry Porter", "JK Rowling");
    cout << book1.getTitle() << endl;
    book1.readBook();

    return 0;
}
