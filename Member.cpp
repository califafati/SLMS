#include "Member.h"
#include <iostream>

Member::Member(int id, string name) : User(id, name) {}

bool Member::borrowBook(int bookId) {

    if (borrowedBooks.size() >= 5) {
        cout << "Borrow limit reached (5 books)." << endl;
        return false;
    }

    borrowedBooks.push_back(bookId);
    return true;
}

bool Member::returnBook(int bookId) {

    for (int i = 0; i < borrowedBooks.size(); i++) {
        if (borrowedBooks[i] == bookId) {
            borrowedBooks.erase(borrowedBooks.begin() + i);
            return true;
        }
    }

    return false;
}

void Member::displayInfo() {
    cout << "Member ID: " << userId << " | Name: " << name << endl;
    cout << "Borrowed Books: " << borrowedBooks.size() << endl;
}