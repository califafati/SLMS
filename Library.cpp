#include "Library.h"
#include <iostream>

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::displayBooks() {

    for (auto &b : books) {
        b.displayBook();
    }
}

Book* Library::searchBookByTitle(string title) {

    for (auto &b : books) {
        if (b.getTitle() == title) {
            return &b;
        }
    }

    return nullptr;
}