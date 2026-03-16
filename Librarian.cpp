#include "Librarian.h"
#include <iostream>

Librarian::Librarian(int id, string name) : User(id, name) {}

void Librarian::displayInfo() {
    cout << "Librarian ID: " << userId << " | Name: " << name << endl;
}
