#include <iostream>
#include "Library.h"
#include "Member.h"
#include "Librarian.h"

using namespace std;

int main() {

    Library library;

    library.addBook(Book(1, "C++ Programming", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Data Structures", "Mark Allen Weiss"));
    library.addBook(Book(3, "Algorithms", "CLRS"));

    Member member1(101, "Alice");
    Librarian librarian1(201, "Bob");

    cout << "===== Library Books =====" << endl;
    library.displayBooks();

    cout << endl;

    string searchTitle;
    cout << "Enter book title to borrow: ";
    getline(cin, searchTitle);

    Book* book = library.searchBookByTitle(searchTitle);

    if (book != nullptr && book->getStatus() == "Available") {

        if (member1.borrowBook(book->getId())) {
            book->setStatus("Borrowed");
            cout << "Book borrowed successfully!" << endl;
        }

    } else {
        cout << "Book not available." << endl;
    }

    cout << endl;
    library.displayBooks();

    return 0;
}