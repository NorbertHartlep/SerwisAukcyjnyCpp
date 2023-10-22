#pragma once

#include <string>
using namespace std;

class Account {
public:
    Account(int _id, const std::string& _name, const std::string& _password);

private:
    int id;
    std::string name;
    std::string password;
};