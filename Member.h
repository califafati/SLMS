#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include <vector>

class Member : public User {
private:
    vector<int> borrowedBooks;

public:
    Member(int id, string name);

    bool borrowBook(int bookId);
    bool returnBook(int bookId);

    void displayInfo() override;
};

#endif
