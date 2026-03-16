#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    string status; // Available, Borrowed, Reserved

public:
    Book();
    Book(int id, string title, string author);

    int getId();
    string getTitle();
    string getAuthor();
    string getStatus();

    void setStatus(string newStatus);

    void displayBook();
};

#endif