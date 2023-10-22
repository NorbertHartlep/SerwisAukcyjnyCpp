#pragma once

#include <string>
using namespace std;

class Auction {
public:
    Auction(const string& _name, const string& _desc, int _price, const string& _expire, int _buy_now_price, int _id);

private:
    std::string name;
    std::string desc;
    int price;
    int id;
    int buy_now_price;
    std::string expire;
};