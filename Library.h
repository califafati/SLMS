#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

class Library {

private:
    vector<Book> books;

public:
    void addBook(Book book);
    void displayBooks();

    Book* searchBookByTitle(string title);
};

#endif