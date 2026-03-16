#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "User.h"

class Librarian : public User {

public:
    Librarian(int id, string name);

    void displayInfo() override;
};

#endif
