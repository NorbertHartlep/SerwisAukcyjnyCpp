#include "Account.h"
#include <iostream>
#include <string>

class Account {
public:
    Account(int _id, const std::string& _name, const std::string& _password)
        : id(_id), name(_name), password(_password) {
    }

private:
    int id;
    std::string name;
    std::string password;
};