#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    int userId;
    string name;

public:
    User(int id, string name);

    virtual void displayInfo(); // polymorphism
};

#endif